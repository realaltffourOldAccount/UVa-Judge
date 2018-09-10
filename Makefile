.PHONY: clean All

All:
	@echo "----------Building project:[ UVa-11332-Summing-Digits - Debug ]----------"
	@cd "UVa-11332-Summing-Digits" && "$(MAKE)" -f  "UVa-11332-Summing-Digits.mk"
clean:
	@echo "----------Cleaning project:[ UVa-11332-Summing-Digits - Debug ]----------"
	@cd "UVa-11332-Summing-Digits" && "$(MAKE)" -f  "UVa-11332-Summing-Digits.mk" clean
