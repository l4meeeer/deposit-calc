if (m <= 100) {
		if (d >= 0 && d <= 30) {
			m *= 0.9;
		}
		if (d > 30 && d <= 120) {
			m *= 1.02;
		}
		if (d > 120 && d <= 240) {
			m *= 1.06;
		}
		if (d > 240 && d <= 365) {
			m *= 1.12;
		}
	}
	if (m > 100) {
		if (d >= 0 && d <= 30) {
			m *= 0.9;
		}
		if (d > 30 && d <= 120) {
			m *= 1.03;
		}
		if (d > 120 && d <= 240) {
			m *= 1.08;
		}
		if (d > 240 && d <= 365) {
			m *= 1.15;
		}